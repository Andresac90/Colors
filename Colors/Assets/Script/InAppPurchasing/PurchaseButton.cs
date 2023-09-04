using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PurchaseButton : MonoBehaviour
{
    public enum PurchaseType {removeads};
    public PurchaseType type;
    public void ClickPurchaseButton()
    {
        switch (type)
        {
            case PurchaseType.removeads:
                IAPManager.instance.BuyRemove_ads();
                break;
        }
    }
}
