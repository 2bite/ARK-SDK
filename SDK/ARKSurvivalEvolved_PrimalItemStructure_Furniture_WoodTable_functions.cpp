// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Furniture_WoodTable_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Furniture_WoodTable.PrimalItemStructure_Furniture_WoodTable_C.ExecuteUbergraph_PrimalItemStructure_Furniture_WoodTable
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Furniture_WoodTable_C::ExecuteUbergraph_PrimalItemStructure_Furniture_WoodTable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Furniture_WoodTable.PrimalItemStructure_Furniture_WoodTable_C.ExecuteUbergraph_PrimalItemStructure_Furniture_WoodTable");

	UPrimalItemStructure_Furniture_WoodTable_C_ExecuteUbergraph_PrimalItemStructure_Furniture_WoodTable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
