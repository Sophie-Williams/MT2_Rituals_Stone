// Search for:
DWORD CItemData::GetISellItemPrice() const
{
	return m_ItemTable.dwISellItemPrice;
}

// Paste Under
int CItemData::GetLevelLimit() const
{
	for(int lv = 0; lv < ITEM_LIMIT_MAX_NUM; lv++)
	{
		if(m_ItemTable.aLimits[lv].bType == LIMIT_LEVEL)
			return m_ItemTable.aLimits[lv].lValue;
	}
	return 0;
}
