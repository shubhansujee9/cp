/*

Our shadows stretch out on the pavement
As I walk in the twilight with you
If we could be together like this forever
Holding hands
It's almost enough to make me cry

The wind grows colder
I can smell winter
Soon the season will come to this town
When I can get close to you

This moment
When the two of us cuddle up
To gaze at the first snow flower of the year
Is overflowing with happiness

It's not dependence or weakness
I just love you
I thought so with all my heart

I feel like when I'm with you
I can overcome anything
I pray that these days
Will continue forever

The wind rattled the window
The night shakes you awake
I will change any sorrow
Into a smile

The snow flowers fell
Outside the window
Unceasing
And colored our town
I realized that love means
Wanting to do something
For someone else

If I should lose you
I'll become a star and shine on you
I'll be with you even on nights
When your smile is wet with tears

This moment
When the two of us cuddle up
To gaze at the first snow flower of the year
Is overflowing with happiness

It's not dependence or weakness
I just want to be like this
With you forever
I can honestly think that now

The pure white snow flowers
Bury this town
Softly drawing memories in our hearts
Together forever with you...

*/

#include <bits/stdc++.h>

using namespace std;

const int N = 5005;

char s[N];

vector<int> all[26];
int cnt[26];

int main() {
  scanf("%s", s);
  int n = strlen(s);
  for (int k = 0; k < n; k++) {
    all[s[k]-'a'].push_back(k);
  }
  int ans = 0;
  for (int i = 0; i < 26; i++) {
    int best = 0;
    for (int j = 1; j < n; j++) {
      memset(cnt, 0, sizeof(cnt));
      for (auto it : all[i]) {
        cnt[s[(it+j)%n] - 'a']++;
      }
      int cur = 0;
      for (int k = 0; k < 26; k++) if (cnt[k] == 1) cur++;
      best = max(best, cur);
    }
    ans += best;
  }
  printf("%.15f\n", (double) ans / n);
  return 0;
}
