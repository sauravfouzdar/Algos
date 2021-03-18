int cw(point& p1, point& p2, point p) {

		int val = (p2.y - p1.y) * (p.x - p2.x) -
			(p2.x - p1.x) * (p.y - p2.y);

		if (val == 0) return 0;  // colinear 

		return (val > 0) ? 1 : 2; // clock or counterclock wise 
	
}
