/***********BUILD SEGMENT TREE*********/
/*
   Here I have implemented st for Query Sum problem
   */
vector<int> a(N),t(4*N);
void build(vector<int> &a, int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    }
    else {
        int tm = (tl + tr) / 2;
        build(a, v * 2, tl, tm);
        build(a, v * 2 + 1, tm + 1, tr);
        t[v] = (t[v * 2] + t[v * 2 + 1]); // Change this line as per query statement
    }
}


/***********Sum Query  **************/

int sum_query(int v, int tl, int tr, int l, int r) {
    if (l > r)
        return 0;
    if (l == tl && r == tr) {
        return t_even[v];
    }
    int tm = (tl + tr) / 2;
    return sum_query(v * 2, tl, tm, l, min(r, tm))
        + sum_query(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
}

/************Update *************/

void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr) t[v] = new_val;
    else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v * 2, tl, tm, pos, new_val);
        else
            update(v * 2 + 1, tm + 1, tr, pos, new_val);

        t[v] = t[v * 2] + t[v * 2 + 1];
    }
}


