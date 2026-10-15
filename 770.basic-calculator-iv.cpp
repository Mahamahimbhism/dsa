/*
 * @lc app=leetcode id=770 lang=cpp
 *
 * [770] Basic Calculator IV
 */

// @lc code=start

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    using Poly = unordered_map<string, long long>;

    string s;
    int n = 0;
    unordered_map<string, long long> valueOf;

    static vector<string> splitKey(const string& key) {
        vector<string> vars;
        if (key.empty()) {
            return vars;
        }

        string current;
        for (char ch : key) {
            if (ch == '*') {
                vars.push_back(current);
                current.clear();
            } else {
                current.push_back(ch);
            }
        }
        vars.push_back(current);
        return vars;
    }

    static string buildKey(vector<string> vars) {
        if (vars.empty()) {
            return "";
        }
        sort(vars.begin(), vars.end());
        string key;
        for (int i = 0; i < (int)vars.size(); ++i) {
            if (i > 0) {
                key.push_back('*');
            }
            key += vars[i];
        }
        return key;
    }

    static int degree(const string& key) {
        if (key.empty()) {
            return 0;
        }
        return (int)count(key.begin(), key.end(), '*') + 1;
    }

    static void addTerm(Poly& poly, const string& key, long long coeff) {
        if (coeff == 0) {
            return;
        }
        poly[key] += coeff;
        if (poly[key] == 0) {
            poly.erase(key);
        }
    }

    static Poly addPoly(const Poly& left, const Poly& right, long long sign = 1) {
        Poly result = left;
        for (const auto& [key, coeff] : right) {
            addTerm(result, key, coeff * sign);
        }
        return result;
    }

    static Poly multiply(const Poly& left, const Poly& right) {
        Poly result;
        for (const auto& [key1, coeff1] : left) {
            vector<string> vars1 = splitKey(key1);
            for (const auto& [key2, coeff2] : right) {
                vector<string> vars2 = splitKey(key2);
                vector<string> merged = vars1;
                merged.insert(merged.end(), vars2.begin(), vars2.end());
                string key = buildKey(std::move(merged));
                addTerm(result, key, coeff1 * coeff2);
            }
        }
        return result;
    }

    Poly parseFactor(int& i) {
        long long sign = 1;
        while (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') {
                sign = -sign;
            }
            ++i;
        }

        Poly result;
        if (i < n && s[i] == '(') {
            ++i;
            result = parseExpression(i);
            if (i < n && s[i] == ')') {
                ++i;
            }
        } else if (i < n && isdigit(s[i])) {
            long long value = 0;
            while (i < n && isdigit(s[i])) {
                value = value * 10 + (s[i] - '0');
                ++i;
            }
            addTerm(result, "", value);
        } else if (i < n && islower(s[i])) {
            string variable;
            while (i < n && islower(s[i])) {
                variable.push_back(s[i]);
                ++i;
            }
            auto it = valueOf.find(variable);
            if (it != valueOf.end()) {
                addTerm(result, "", it->second);
            } else {
                addTerm(result, variable, 1);
            }
        }

        if (sign == -1) {
            for (auto& [key, coeff] : result) {
                coeff = -coeff;
            }
        }
        return result;
    }

    Poly parseTerm(int& i) {
        Poly result = parseFactor(i);
        while (i < n && s[i] == '*') {
            ++i;
            Poly nextFactor = parseFactor(i);
            result = multiply(result, nextFactor);
        }
        return result;
    }

    Poly parseExpression(int& i) {
        Poly result = parseTerm(i);
        while (i < n && s[i] != ')') {
            char op = s[i];
            if (op != '+' && op != '-') {
                break;
            }
            ++i;
            Poly nextTerm = parseTerm(i);
            result = addPoly(result, nextTerm, op == '+' ? 1 : -1);
        }
        return result;
    }

    vector<string> format(const Poly& poly) {
        vector<pair<string, long long>> terms;
        terms.reserve(poly.size());
        for (const auto& [key, coeff] : poly) {
            if (coeff != 0) {
                terms.push_back({key, coeff});
            }
        }

        sort(terms.begin(), terms.end(), [](const auto& a, const auto& b) {
            int da = degree(a.first);
            int db = degree(b.first);
            if (da != db) {
                return da > db;
            }
            return a.first < b.first;
        });

        vector<string> result;
        for (const auto& [key, coeff] : terms) {
            string term;
            if (key.empty()) {
                term = to_string(coeff);
            } else if (coeff == 1) {
                term = key;
            } else if (coeff == -1) {
                term = "-" + key;
            } else {
                term = to_string(coeff) + '*' + key;
            }
            result.push_back(term);
        }

        if (result.empty()) {
            result.push_back("0");
        }
        return result;
    }

    vector<string> basicCalculatorIV(string expression, vector<string>& evalvars, vector<int>& evalints) {
        valueOf.clear();
        for (int i = 0; i < (int)evalvars.size(); ++i) {
            valueOf[evalvars[i]] = evalints[i];
        }

        s.clear();
        for (char ch : expression) {
            if (ch != ' ') {
                s.push_back(ch);
            }
        }
        n = (int)s.size();

        int i = 0;
        Poly poly = parseExpression(i);
        return format(poly);
    }
};

// @lc code=end

