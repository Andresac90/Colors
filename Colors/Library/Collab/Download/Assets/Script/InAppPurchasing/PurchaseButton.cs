using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PurchaseButton : MonoBehaviour
{
    public enum PurchaseType {removeAds};
    public PurchaseType type;
    public void ClickPurchaseButton()
    {
        switch (type)
        {
            case PurchaseType.removeAds:
                IAPManager.instance.BuyRemove_Ads();
                break;
        }
    }
}
