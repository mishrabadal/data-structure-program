ios_base:: sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
int t;
string tc;
getline(cin, tc);
t = stoi(tc);
while (t--) {
string s;
getline(cin, s);
Solution ob;
vector<int> ans = ob.bracketNumbers(s);
for (auto i: ans)
cout << 1 << ;
cout << "\n\n";
}
return 0;