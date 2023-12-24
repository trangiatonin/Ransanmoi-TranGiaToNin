#include "pch.h"
#include "Hcn.h"



void Hcn::draw(CClientDC* pDC)
{

   
    CPen pen(PS_SOLID, 5, RGB(260, 192, 192));
    CBrush brush(RGB(173, 216, 230));
    CPen* pOldPen = pDC->SelectObject(&pen);
    CBrush* pOldBrush = pDC->SelectObject(&brush);
    pDC->Rectangle(x1, y1, x2, y2); 
    pDC->SelectObject(pOldPen);
    pDC->SelectObject(pOldBrush);
   
    
}


	



