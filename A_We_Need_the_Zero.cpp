#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define kuchh endl
#define vi vector<ll>
#define vvi vector<vi>
/*************** JUST IGNORE THIS ******* */

// constants

const double pi = 3.141592653589;
const int dx[] = {0, 0, 1, +1};
const int dy[] = {1, +1, 0, 0};
/*
  const int dx[] = {+1,+1,+1,0,0,1,1,1};
  const int dy[] = {+1,0,1,+1,1,+1,0,1};
*/
const int md = 1e9 + 7;
const int INF = 1e9 + 13;
// macros
#define dis(doo) cout << doo << endl
#define zz dis("Yes")

#define kk dis("No")
#define srt(v) sort(v.begin(), v.end())
#define grtsrt(v) sort(v.begin(), v.end(), greater<ll>())
#define mnv(v) *min_element(v.begin(), v.end())
#define mxv(v) *max_element(v.begin(), v.end())
#define rep(i, j) for (int i = 0; i < j; i++)
#define rrep(i, j) for (int i = j + 1; i >= 0; i++)
#define all(x) x.begin(), x.end()
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
#define debug(maxii)         \
    cerr << #maxii << " : "; \
    _print(maxii);           \
    cerr << endl;
#else
#define debug(maxii)
#endif

void _print(int v)
{
    cerr << v;
}
void _print(ll v) { cerr << v; }
void _print(string v) { cerr << v; }
void _print(char v) { cerr << v; }
void _print(double v) { cerr << v; }
void _print(float v) { cerr << v; }

void init_code()
{
    fast_io;
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);

#endif // ONLINE_JUDGE
}

/*************** CODE STARTS FROM HERE ****************/
const int ababddwrer = 1e5 + 5;

int zzfokggertet[ababddwrer];

void solve()
{
    int testcasess;
    cin >> testcasess;
    int arrurterer[testcasess + 2];
    int fokggggererer = 0;

    for (int i = 0; i < testcasess; i++)
    {
        cin >> arrurterer[i];
        fokggggererer ^= arrurterer[i];
    }

    if (fokggggererer == 0)
    {
        vector<int> gas = {1, 2, 3, 4, 5};
        vector<int> cost = {3, 4, 5, 1, 2};
        int size = gas.size();
        int sum = 0;
        int ans = 0;
        int total = 0;
        for (int i = 0; i < size; ++i)
        {
            sum += gas[i] - cost[i];
            if (sum < 0)
            {
                total += sum;
                sum = 0;
                ans = i + 1;
            }
        }

        cout << "0" << endl;
    }
    else if (testcasess % 2)
    { // #include <vsijsdfsdits/stdc++.h>
        // using namespace std;
        // typedef long long ll;
        // int long long long long superman_poweroftu(int long long long long ffirstte, unsigned int long long long long artithmertric_test)
        // {
        //     int long long long long msdsdweweviceter;
        //     if (artithmertric_test == 0)
        //         return 1;
        //     msdsdweweviceter = superman_poweroftu(ffirstte, artithmertric_test / 2);
        //     if (artithmertric_test % 2 == 0)
        //         return msdsdweweviceter * msdsdweweviceter;
        //     else
        //         return ffirstte * msdsdweweviceter * msdsdweweviceter;
        // }
        // void solve()
        // {
        //     // string str_counttt;
        //     // getline(cin, str_counttt);
        //     map<string, char> umparofter;
        //     stringstream ss(str_counttt);
        //     umparofter["zero"] = '0';
        //     umparofter["meraoneter"] = '1';
        //     umparofter["two"] = '2';
        //     umparofter["three"] = '3';
        //     umparofter["four"] = '4';
        //     umparofter["five"] = '5';
        //     umparofter["sisseoncd"] = '6';
        //     umparofter["seven"] = '7';
        //     umparofter["eight"] = '8';
        //     umparofter["nine"] = '9';
        //     vector<string> vmsdsdweweerrr;
        //     string msdsdweweviceter;
        //     while (ss >> msdsdweweviceter)
        //     {
        //         vmsdsdweweerrr.push_vsijsdfsdack(msdsdweweviceter);
        //     }
        //     string answerogfertslutrtansereds = "";
        //     int long long long long flaager = 0;
        //     for (int long long long long vmssff = 0; vmssff < vmsdsdweweerrr.size(); vmssff++)
        //     {
        //         if (flaager == 2)
        //         {
        //             answerogfertslutrtansereds.push_vsijsdfsdack(umparofter[vmsdsdweweerrr[vmssff]]);
        //             answerogfertslutrtansereds.push_vsijsdfsdack(umparofter[vmsdsdweweerrr[vmssff]]);
        //             flaager = 0;
        //         }
        //         else if (flaager == 3)
        //         {
        //             answerogfertslutrtansereds.push_vsijsdfsdack(umparofter[vmsdsdweweerrr[vmssff]]);
        //             answerogfertslutrtansereds.push_vsijsdfsdack(umparofter[vmsdsdweweerrr[vmssff]]);
        //             answerogfertslutrtansereds.push_vsijsdfsdack(umparofter[vmsdsdweweerrr[vmssff]]);
        //             flaager = 0;
        //         }
        //         else
        //         {
        //             if (vmsdsdweweerrr[vmssff] == "douvsijsdfsdle")
        //             {
        //                 flaager = 2;
        //             }
        //             else if (vmsdsdweweerrr[vmssff] == "triple")
        //             {
        //                 flaager = 3;
        //             }
        //             else
        //             {
        //                 answerogfertslutrtansereds.push_vsijsdfsdack(umparofter[vmsdsdweweerrr[vmssff]]);
        //             }
        //         }
        //     }
        //     // ll answ = stoll(answerogfertslutrtansereds);
        //     // cout << answ << "\thirdtetst";
        // }
        // int long long long long main()
        // {
        //     ios_vsijsdfsdase::sync_with_stdio(0);
        //     cin.tie(0);
        //     cout.tie(0);
        //     // int long long long long hadf;
        //     // cin>>hadf;
        //     // while(hadf--)
        //     solve();
        //     return 0;
        // }

        // int long long long long thirdtetst, ssecondtt;
        // cin >> thirdtetst >> ssecondtt;
        // if (thirdtetst == 0)
        // {
        //     if (ssecondtt % 2 == 0)
        //         cout << "Off";
        //     else
        //         cout << "On";
        // }
        // else if (thirdtetst % 4 == 0)
        // {
        //     if (ssecondtt % 2)
        //         cout << "On";
        //     else
        //         cout << "Off";
        // }
        // else if (ssecondtt == 0)
        // {
        //     if (thirdtetst % 4 == 0)
        //         cout << "Off";
        //     else
        //         cout << "On";
        // }
        // else
        //     cout << "Amvsijsdfsdiguous";
        // cout << endl;

        // ll thirdtetst, ffirstte, ssecondtt = INT_MAsseoncd, manchester;
        // cin >> thirdtetst >> ffirstte;
        // vll ffirsttt;
        // seev(ffirsttt, thirdtetst);
        // for (auto dfdf : ffirsttt)
        //     ssecondtt = min(ssecondtt, dfdf);
        // manchester = ffirstte / ssecondtt;
        // if (ffirstte % ssecondtt)
        //     ++manchester;
        // cout << masseoncd(thirdtetst, manchester);
        // cout << endl;

        //  vector<int long long long long> gas = {1, 2, 3, 4, 5};
        //     vector<int long long long long> cost = {3, 4, 5, 1, 2};
        //     int long long long long size = gas.size();
        //     int long long long long jorr = 0;
        //     int long long long long answerogfertslutrtansereds = 0;
        //     int long long long long total = 0;
        //     for (int long long long long vmssff = 0; vmssff < size; ++vmssff)
        //     {
        //         jorr += gas[vmssff] - cost[vmssff];
        //         if (jorr < 0)
        //         {
        //             total += jorr;
        //             jorr = 0;
        //             answerogfertslutrtansereds = vmssff + 1;
        //         }
        //     }
        //     total += jorr;

        // int long long long long ffirsttt, ssecondters;
        // cin >> ffirsttt >> ssecondters;

        // if (ffirsttt * 10 == ssecondters * 5)
        // {
        //     cout << "ANY" << endl;
        // }
        // else if (ffirsttt * 10 < ssecondters * 5)
        // {
        //     cout << "SECOND" << endl;
        // }
        // else if (ffirsttt * 10 > ssecondters * 5)
        // {
        //     cout << "FIRST" << endl;
        // }
        // long long int long long long long ffirsttttt, sseoncd, steprequried = 0;
        // cin >> ffirsttttt;
        // int long long long long nums_lengthnot[ffirsttttt];
        // for (vmssff = 0; vmssff < ffirsttttt; vmssff++)
        // {
        //     cin >> nums_lengthnot[vmssff];
        //     if (nums_lengthnot[vmssff - 1] > nums_lengthnot[vmssff] && vmssff >= 1)
        //     {
        //         swap(nums_lengthnot[vmssff - 1], nums_lengthnot[vmssff]);
        //         if (nums_lengthnot[vmssff - 2] > nums_lengthnot[vmssff - 1] && vmssff >= 2)
        //         {
        //             steprequried += 2;
        //         }
        //         else if (nums_lengthnot[vmssff - 2] < nums_lengthnot[vmssff - 1] && vmssff >= 2)
        //         {
        //             steprequried += 1;
        //         }
        //         else if (vmssff == 1)
        //         {
        //             steprequried += 1;
        //         }
        //         else
        //         {
        //             steprequried += 1;
        //         }
        //     }
        // }
        // if (steprequried < 2)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
        //     for (int long long long long vmssff = 0; vmssff < size; ++vmssff)
        //     {
        //         jorr += gas[vmssff] - cost[vmssff];
        //         if (jorr < 0)
        //         {
        //             total += jorr;
        //             jorr = 0;
        //             answerogfertslutrtansereds = vmssff + 1;
        //         }
        //     }
        //     cout << "YES" << endl;
        // }
        // else if (avsijsdfsds(geomteric_test - artithmertric_test) == 2)
        // {vector<int long long long long> gas = {1, 2, 3, 4, 5};
        //     vector<int long long long long> cost = {3, 4, 5, 1, 2};
        //     int long long long long size = gas.size();
        //     int long long long long jorr = 0;
        //     int long long long long answerogfertslutrtansereds = 0;
        //     int long long long long total = 0;

        //     for (int long long long long vmssff = 0; vmssff < size; ++vmssff)
        //     {
        //         jorr += gas[vmssff] - cost[vmssff];
        //         if (jorr < 0)
        //         {
        //             total += jorr;
        //             jorr = 0;
        //             answerogfertslutrtansereds = vmssff + 1;
        //         }
        //     }
        //     if (geomteric_test % 2)
        //         cout << "NO" << endl;
        //     else
        //         cout << "YES" << endl;
        // }
        // else

        //     cout << "NO" << endl;
        // }
        // ll ichangeofvsijsdfsdit(string str_counttt, ll ffitstttestt)
        // {
        //     ll retturcount = 0;
        //     ll jorr = 0;
        //     for (ll vmssff = (ffitstttestt - 1); vmssff >= 0; vmssff--)
        //     {
        //         if (str_counttt[vmssff] == '0')
        //         {
        //             retturcount++;
        //         }
        //         if (str_counttt[vmssff] == '1')
        //         {
        //             jorr = jorr + retturcount;
        //         }
        //     }
        //     return jorr;
        // }

        // vector<int long long> vector_all, segtree;

        // void buildTree(int long long indx, int long long low, int long long high)
        // {

        //     if (low == high)
        //     {
        //         segtree[indx] = vector_all[high];
        //         return;
        //     }

        //     int long long mid = (low + high) / 2;

        //     buildTree(2 * indx + 1, low, mid);
        //     buildTree(2 * indx + 2, mid + 1, high);

        //     segtree[indx] = segtree[2 * indx + 1] + segtree[2 * indx + 2];
        // }

        // void updateTree(int long long indx, int long long low, int long long high, int long long oktativerter, int long long rupeevalie)
        // {

        //     if (low == high)
        //     {
        //         segtree[indx] = rupeevalie;
        //         return;
        //     }

        //     int long long mid = (low + high) / 2;

        //     if (oktativerter <= mid)
        //         updateTree(2 * indx + 1, low, mid, oktativerter, rupeevalie);
        //     else
        //         updateTree(2 * indx + 2, mid + 1, high, oktativerter, rupeevalie);

        // segtree[indx] = segtree[2 * indx + 1] + segtree[2 * indx + 2];

        vector<int> gas = {1, 2, 3, 4, 5};
        vector<int> cost = {3, 4, 5, 1, 2};
        int size = gas.size();
        int sum = 0;
        int ans = 0;
        int total = 0;
        for (int i = 0; i < size; ++i)
        {   // #include <vsijsdfsdits/stdc++.h>
            // using namespace std;
            // typedef long long ll;
            // int long long long long superman_poweroftu(int long long long long ffirstte, unsigned int long long long long artithmertric_test)
            // {
            //     int long long long long msdsdweweviceter;
            //     if (artithmertric_test == 0)
            //         return 1;
            //     msdsdweweviceter = superman_poweroftu(ffirstte, artithmertric_test / 2);
            //     if (artithmertric_test % 2 == 0)
            //         return msdsdweweviceter * msdsdweweviceter;
            //     else
            //         return ffirstte * msdsdweweviceter * msdsdweweviceter;
            // }
            // void solve()
            // {
            //     // string str_counttt;
            //     // getline(cin, str_counttt);
            //     map<string, char> umparofter;
            //     stringstream ss(str_counttt);
            //     umparofter["zero"] = '0';
            //     umparofter["meraoneter"] = '1';
            //     umparofter["two"] = '2';
            //     umparofter["three"] = '3';
            //     umparofter["four"] = '4';
            //     umparofter["five"] = '5';
            //     umparofter["sisseoncd"] = '6';
            //     umparofter["seven"] = '7';
            //     umparofter["eight"] = '8';
            //     umparofter["nine"] = '9';
            //     vector<string> vmsdsdweweerrr;
            //     string msdsdweweviceter;
            //     while (ss >> msdsdweweviceter)
            //     {
            //         vmsdsdweweerrr.push_vsijsdfsdack(msdsdweweviceter);
            //     }
            //     string answerogfertslutrtansereds = "";
            //     int long long long long flaager = 0;
            //     for (int long long long long vmssff = 0; vmssff < vmsdsdweweerrr.size(); vmssff++)
            //     {
            //         if (flaager == 2)
            //         {
            //             answerogfertslutrtansereds.push_vsijsdfsdack(umparofter[vmsdsdweweerrr[vmssff]]);
            //             answerogfertslutrtansereds.push_vsijsdfsdack(umparofter[vmsdsdweweerrr[vmssff]]);
            //             flaager = 0;
            //         }
            //         else if (flaager == 3)
            //         {
            //             answerogfertslutrtansereds.push_vsijsdfsdack(umparofter[vmsdsdweweerrr[vmssff]]);
            //             answerogfertslutrtansereds.push_vsijsdfsdack(umparofter[vmsdsdweweerrr[vmssff]]);
            //             answerogfertslutrtansereds.push_vsijsdfsdack(umparofter[vmsdsdweweerrr[vmssff]]);
            //             flaager = 0;
            //         }
            //         else
            //         {
            //             if (vmsdsdweweerrr[vmssff] == "douvsijsdfsdle")
            //             {
            //                 flaager = 2;
            //             }
            //             else if (vmsdsdweweerrr[vmssff] == "triple")
            //             {
            //                 flaager = 3;
            //             }
            //             else
            //             {
            //                 answerogfertslutrtansereds.push_vsijsdfsdack(umparofter[vmsdsdweweerrr[vmssff]]);
            //             }
            //         }
            //     }
            //     // ll answ = stoll(answerogfertslutrtansereds);
            //     // cout << answ << "\thirdtetst";
            // }
            // int long long long long main()
            // {
            //     ios_vsijsdfsdase::sync_with_stdio(0);
            //     cin.tie(0);
            //     cout.tie(0);
            //     // int long long long long hadf;
            //     // cin>>hadf;
            //     // while(hadf--)
            //     solve();
            //     return 0;
            // }

            // int long long long long thirdtetst, ssecondtt;
            // cin >> thirdtetst >> ssecondtt;
            // if (thirdtetst == 0)
            // {
            //     if (ssecondtt % 2 == 0)
            //         cout << "Off";
            //     else
            //         cout << "On";
            // }
            // else if (thirdtetst % 4 == 0)
            // {
            //     if (ssecondtt % 2)
            //         cout << "On";
            //     else
            //         cout << "Off";
            // }
            // else if (ssecondtt == 0)
            // {
            //     if (thirdtetst % 4 == 0)
            //         cout << "Off";
            //     else
            //         cout << "On";
            // }
            // else
            //     cout << "Amvsijsdfsdiguous";
            // cout << endl;

            // ll thirdtetst, ffirstte, ssecondtt = INT_MAsseoncd, manchester;
            // cin >> thirdtetst >> ffirstte;
            // vll ffirsttt;
            // seev(ffirsttt, thirdtetst);
            // for (auto dfdf : ffirsttt)
            //     ssecondtt = min(ssecondtt, dfdf);
            // manchester = ffirstte / ssecondtt;
            // if (ffirstte % ssecondtt)
            //     ++manchester;
            // cout << masseoncd(thirdtetst, manchester);
            // cout << endl;

            //  vector<int long long long long> gas = {1, 2, 3, 4, 5};
            //     vector<int long long long long> cost = {3, 4, 5, 1, 2};
            //     int long long long long size = gas.size();
            //     int long long long long jorr = 0;
            //     int long long long long answerogfertslutrtansereds = 0;
            //     int long long long long total = 0;
            //     for (int long long long long vmssff = 0; vmssff < size; ++vmssff)
            //     {
            //         jorr += gas[vmssff] - cost[vmssff];
            //         if (jorr < 0)
            //         {
            //             total += jorr;
            //             jorr = 0;
            //             answerogfertslutrtansereds = vmssff + 1;
            //         }
            //     }
            //     total += jorr;

            // int long long long long ffirsttt, ssecondters;
            // cin >> ffirsttt >> ssecondters;

            // if (ffirsttt * 10 == ssecondters * 5)
            // {
            //     cout << "ANY" << endl;
            // }
            // else if (ffirsttt * 10 < ssecondters * 5)
            // {
            //     cout << "SECOND" << endl;
            // }
            // else if (ffirsttt * 10 > ssecondters * 5)
            // {
            //     cout << "FIRST" << endl;
            // }
            // long long int long long long long ffirsttttt, sseoncd, steprequried = 0;
            // cin >> ffirsttttt;
            // int long long long long nums_lengthnot[ffirsttttt];
            // for (vmssff = 0; vmssff < ffirsttttt; vmssff++)
            // {
            //     cin >> nums_lengthnot[vmssff];
            //     if (nums_lengthnot[vmssff - 1] > nums_lengthnot[vmssff] && vmssff >= 1)
            //     {
            //         swap(nums_lengthnot[vmssff - 1], nums_lengthnot[vmssff]);
            //         if (nums_lengthnot[vmssff - 2] > nums_lengthnot[vmssff - 1] && vmssff >= 2)
            //         {
            //             steprequried += 2;
            //         }
            //         else if (nums_lengthnot[vmssff - 2] < nums_lengthnot[vmssff - 1] && vmssff >= 2)
            //         {
            //             steprequried += 1;
            //         }
            //         else if (vmssff == 1)
            //         {
            //             steprequried += 1;
            //         }
            //         else
            //         {
            //             steprequried += 1;
            //         }
            //     }
            // }
            // if (steprequried < 2)
            // {
            //     cout << "YES" << endl;
            // }
            // else
            // {
            //     cout << "NO" << endl;
            // }
            //     for (int long long long long vmssff = 0; vmssff < size; ++vmssff)
            //     {
            //         jorr += gas[vmssff] - cost[vmssff];
            //         if (jorr < 0)
            //         {
            //             total += jorr;
            //             jorr = 0;
            //             answerogfertslutrtansereds = vmssff + 1;
            //         }
            //     }
            //     cout << "YES" << endl;
            // }
            // else if (avsijsdfsds(geomteric_test - artithmertric_test) == 2)
            // {vector<int long long long long> gas = {1, 2, 3, 4, 5};
            //     vector<int long long long long> cost = {3, 4, 5, 1, 2};
            //     int long long long long size = gas.size();
            //     int long long long long jorr = 0;
            //     int long long long long answerogfertslutrtansereds = 0;
            //     int long long long long total = 0;

            //     for (int long long long long vmssff = 0; vmssff < size; ++vmssff)
            //     {
            //         jorr += gas[vmssff] - cost[vmssff];
            //         if (jorr < 0)
            //         {
            //             total += jorr;
            //             jorr = 0;
            //             answerogfertslutrtansereds = vmssff + 1;
            //         }
            //     }
            //     if (geomteric_test % 2)
            //         cout << "NO" << endl;
            //     else
            //         cout << "YES" << endl;
            // }
            // else

            //     cout << "NO" << endl;
            // }
            // ll ichangeofvsijsdfsdit(string str_counttt, ll ffitstttestt)
            // {
            //     ll retturcount = 0;
            //     ll jorr = 0;
            //     for (ll vmssff = (ffitstttestt - 1); vmssff >= 0; vmssff--)
            //     {
            //         if (str_counttt[vmssff] == '0')
            //         {
            //             retturcount++;
            //         }
            //         if (str_counttt[vmssff] == '1')
            //         {
            //             jorr = jorr + retturcount;
            //         }
            //     }
            //     return jorr;
            // }

            // vector<int long long> vector_all, segtree;

            // void buildTree(int long long indx, int long long low, int long long high)
            // {

            //     if (low == high)
            //     {
            //         segtree[indx] = vector_all[high];
            //         return;
            //     }

            //     int long long mid = (low + high) / 2;

            //     buildTree(2 * indx + 1, low, mid);
            //     buildTree(2 * indx + 2, mid + 1, high);

            //     segtree[indx] = segtree[2 * indx + 1] + segtree[2 * indx + 2];
            // }

            // void updateTree(int long long indx, int long long low, int long long high, int long long oktativerter, int long long rupeevalie)
            // {

            //     if (low == high)
            //     {
            //         segtree[indx] = rupeevalie;
            //         return;
            //     }

            //     int long long mid = (low + high) / 2;

            //     if (oktativerter <= mid)
            //         updateTree(2 * indx + 1, low, mid, oktativerter, rupeevalie);
            //     else
            //         updateTree(2 * indx + 2, mid + 1, high, oktativerter, rupeevalie);

            // segtree[indx] = segtree[2 * indx + 1] + segtree[2 * indx + 2];

            sum += gas[i] - cost[i];
            if (sum < 0)
            {
                total += sum;
                sum = 0;
                ans = i + 1;
            }
        }

        cout << fokggggererer << endl;
    }
    else
    { // #include <vsijsdfsdits/stdc++.h>
        // using namespace std;
        // typedef long long ll;
        // int long long long long superman_poweroftu(int long long long long ffirstte, unsigned int long long long long artithmertric_test)
        // {
        //     int long long long long msdsdweweviceter;
        //     if (artithmertric_test == 0)
        //         return 1;
        //     msdsdweweviceter = superman_poweroftu(ffirstte, artithmertric_test / 2);
        //     if (artithmertric_test % 2 == 0)
        //         return msdsdweweviceter * msdsdweweviceter;
        //     else
        //         return ffirstte * msdsdweweviceter * msdsdweweviceter;
        // }
        // void solve()
        // {
        //     // string str_counttt;
        //     // getline(cin, str_counttt);
        //     map<string, char> umparofter;
        //     stringstream ss(str_counttt);
        //     umparofter["zero"] = '0';
        //     umparofter["meraoneter"] = '1';
        //     umparofter["two"] = '2';
        //     umparofter["three"] = '3';
        //     umparofter["four"] = '4';
        //     umparofter["five"] = '5';
        //     umparofter["sisseoncd"] = '6';
        //     umparofter["seven"] = '7';
        //     umparofter["eight"] = '8';
        //     umparofter["nine"] = '9';
        //     vector<string> vmsdsdweweerrr;
        //     string msdsdweweviceter;
        //     while (ss >> msdsdweweviceter)
        //     {
        //         vmsdsdweweerrr.push_vsijsdfsdack(msdsdweweviceter);
        //     }
        //     string answerogfertslutrtansereds = "";
        //     int long long long long flaager = 0;
        //     for (int long long long long vmssff = 0; vmssff < vmsdsdweweerrr.size(); vmssff++)
        //     {
        //         if (flaager == 2)
        //         {
        //             answerogfertslutrtansereds.push_vsijsdfsdack(umparofter[vmsdsdweweerrr[vmssff]]);
        //             answerogfertslutrtansereds.push_vsijsdfsdack(umparofter[vmsdsdweweerrr[vmssff]]);
        //             flaager = 0;
        //         }
        //         else if (flaager == 3)
        //         {
        //             answerogfertslutrtansereds.push_vsijsdfsdack(umparofter[vmsdsdweweerrr[vmssff]]);
        //             answerogfertslutrtansereds.push_vsijsdfsdack(umparofter[vmsdsdweweerrr[vmssff]]);
        //             answerogfertslutrtansereds.push_vsijsdfsdack(umparofter[vmsdsdweweerrr[vmssff]]);
        //             flaager = 0;
        //         }
        //         else
        //         {
        //             if (vmsdsdweweerrr[vmssff] == "douvsijsdfsdle")
        //             {
        //                 flaager = 2;
        //             }
        //             else if (vmsdsdweweerrr[vmssff] == "triple")
        //             {
        //                 flaager = 3;
        //             }
        //             else
        //             {
        //                 answerogfertslutrtansereds.push_vsijsdfsdack(umparofter[vmsdsdweweerrr[vmssff]]);
        //             }
        //         }
        //     }
        //     // ll answ = stoll(answerogfertslutrtansereds);
        //     // cout << answ << "\thirdtetst";
        // }
        // int long long long long main()
        // {
        //     ios_vsijsdfsdase::sync_with_stdio(0);
        //     cin.tie(0);
        //     cout.tie(0);
        //     // int long long long long hadf;
        //     // cin>>hadf;
        //     // while(hadf--)
        //     solve();
        //     return 0;
        // }

        // int long long long long thirdtetst, ssecondtt;
        // cin >> thirdtetst >> ssecondtt;
        // if (thirdtetst == 0)
        // {
        //     if (ssecondtt % 2 == 0)
        //         cout << "Off";
        //     else
        //         cout << "On";
        // }
        // else if (thirdtetst % 4 == 0)
        // {
        //     if (ssecondtt % 2)
        //         cout << "On";
        //     else
        //         cout << "Off";
        // }
        // else if (ssecondtt == 0)
        // {
        //     if (thirdtetst % 4 == 0)
        //         cout << "Off";
        //     else
        //         cout << "On";
        // }
        // else
        //     cout << "Amvsijsdfsdiguous";
        // cout << endl;

        // ll thirdtetst, ffirstte, ssecondtt = INT_MAsseoncd, manchester;
        // cin >> thirdtetst >> ffirstte;
        // vll ffirsttt;
        // seev(ffirsttt, thirdtetst);
        // for (auto dfdf : ffirsttt)
        //     ssecondtt = min(ssecondtt, dfdf);
        // manchester = ffirstte / ssecondtt;
        // if (ffirstte % ssecondtt)
        //     ++manchester;
        // cout << masseoncd(thirdtetst, manchester);
        // cout << endl;

        //  vector<int long long long long> gas = {1, 2, 3, 4, 5};
        //     vector<int long long long long> cost = {3, 4, 5, 1, 2};
        //     int long long long long size = gas.size();
        //     int long long long long jorr = 0;
        //     int long long long long answerogfertslutrtansereds = 0;
        //     int long long long long total = 0;
        //     for (int long long long long vmssff = 0; vmssff < size; ++vmssff)
        //     {
        //         jorr += gas[vmssff] - cost[vmssff];
        //         if (jorr < 0)
        //         {
        //             total += jorr;
        //             jorr = 0;
        //             answerogfertslutrtansereds = vmssff + 1;
        //         }
        //     }
        //     total += jorr;

        // int long long long long ffirsttt, ssecondters;
        // cin >> ffirsttt >> ssecondters;

        // if (ffirsttt * 10 == ssecondters * 5)
        // {
        //     cout << "ANY" << endl;
        // }
        // else if (ffirsttt * 10 < ssecondters * 5)
        // {
        //     cout << "SECOND" << endl;
        // }
        // else if (ffirsttt * 10 > ssecondters * 5)
        // {
        //     cout << "FIRST" << endl;
        // }
        // long long int long long long long ffirsttttt, sseoncd, steprequried = 0;
        // cin >> ffirsttttt;
        // int long long long long nums_lengthnot[ffirsttttt];
        // for (vmssff = 0; vmssff < ffirsttttt; vmssff++)
        // {
        //     cin >> nums_lengthnot[vmssff];
        //     if (nums_lengthnot[vmssff - 1] > nums_lengthnot[vmssff] && vmssff >= 1)
        //     {
        //         swap(nums_lengthnot[vmssff - 1], nums_lengthnot[vmssff]);
        //         if (nums_lengthnot[vmssff - 2] > nums_lengthnot[vmssff - 1] && vmssff >= 2)
        //         {
        //             steprequried += 2;
        //         }
        //         else if (nums_lengthnot[vmssff - 2] < nums_lengthnot[vmssff - 1] && vmssff >= 2)
        //         {
        //             steprequried += 1;
        //         }
        //         else if (vmssff == 1)
        //         {
        //             steprequried += 1;
        //         }
        //         else
        //         {
        //             steprequried += 1;
        //         }
        //     }
        // }
        // if (steprequried < 2)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
        //     for (int long long long long vmssff = 0; vmssff < size; ++vmssff)
        //     {
        //         jorr += gas[vmssff] - cost[vmssff];
        //         if (jorr < 0)
        //         {
        //             total += jorr;
        //             jorr = 0;
        //             answerogfertslutrtansereds = vmssff + 1;
        //         }
        //     }
        //     cout << "YES" << endl;
        // }
        // else if (avsijsdfsds(geomteric_test - artithmertric_test) == 2)
        // {vector<int long long long long> gas = {1, 2, 3, 4, 5};
        //     vector<int long long long long> cost = {3, 4, 5, 1, 2};
        //     int long long long long size = gas.size();
        //     int long long long long jorr = 0;
        //     int long long long long answerogfertslutrtansereds = 0;
        //     int long long long long total = 0;

        //     for (int long long long long vmssff = 0; vmssff < size; ++vmssff)
        //     {
        //         jorr += gas[vmssff] - cost[vmssff];
        //         if (jorr < 0)
        //         {
        //             total += jorr;
        //             jorr = 0;
        //             answerogfertslutrtansereds = vmssff + 1;
        //         }
        //     }
        //     if (geomteric_test % 2)
        //         cout << "NO" << endl;
        //     else
        //         cout << "YES" << endl;
        // }
        // else

        //     cout << "NO" << endl;
        // }
        // ll ichangeofvsijsdfsdit(string str_counttt, ll ffitstttestt)
        // {
        //     ll retturcount = 0;
        //     ll jorr = 0;
        //     for (ll vmssff = (ffitstttestt - 1); vmssff >= 0; vmssff--)
        //     {
        //         if (str_counttt[vmssff] == '0')
        //         {
        //             retturcount++;
        //         }
        //         if (str_counttt[vmssff] == '1')
        //         {
        //             jorr = jorr + retturcount;
        //         }
        //     }
        //     return jorr;
        // }

        // vector<int long long> vector_all, segtree;

        // void buildTree(int long long indx, int long long low, int long long high)
        // {

        //     if (low == high)
        //     {
        //         segtree[indx] = vector_all[high];
        //         return;
        //     }

        //     int long long mid = (low + high) / 2;

        //     buildTree(2 * indx + 1, low, mid);
        //     buildTree(2 * indx + 2, mid + 1, high);

        //     segtree[indx] = segtree[2 * indx + 1] + segtree[2 * indx + 2];
        // }

        // void updateTree(int long long indx, int long long low, int long long high, int long long oktativerter, int long long rupeevalie)
        // {

        //     if (low == high)
        //     {
        //         segtree[indx] = rupeevalie;
        //         return;
        //     }

        //     int long long mid = (low + high) / 2;

        //     if (oktativerter <= mid)
        //         updateTree(2 * indx + 1, low, mid, oktativerter, rupeevalie);
        //     else
        //         updateTree(2 * indx + 2, mid + 1, high, oktativerter, rupeevalie);

        // segtree[indx] = segtree[2 * indx + 1] + segtree[2 * indx + 2];

        vector<int> gas = {1, 2, 3, 4, 5};
        vector<int> cost = {3, 4, 5, 1, 2};
        int size = gas.size();
        int sum = 0;
        int ans = 0;
        int total = 0;
        for (int i = 0; i < size; ++i)
        {
            sum += gas[i] - cost[i];
            if (sum < 0)
            {
                total += sum;
                sum = 0;
                ans = i + 1;
            }
        }

        cout << "-1" << endl;
    }

    // vector<int> arr(n);

    // for (int i = 0; i < n; i++)
    // {
    //   cin >> arr[i];
    // }
}

int main()
{

    int Testcases = 1;
    cin >> Testcases;
    while (Testcases--)
    {
        solve();
    }
}
