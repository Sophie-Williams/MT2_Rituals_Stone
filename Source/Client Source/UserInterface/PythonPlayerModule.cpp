// Search for:
	if (CItemData::ITEM_TYPE_ROD == iTargetType)
		return Py_BuildValue("i", REFINE_CANT_REFINE_ROD);

//Under:
	if (pScrollItemData->GetValue(0) == 8 && pTargetItemData->GetLevelLimit() < pScrollItemData->GetValue(1))
	{
			return Py_BuildValue("i", REFINE_CANT);
	}
