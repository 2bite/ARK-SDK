// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Boots_Gen2_NoMap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekArmor_Boots_Gen2_NoMap.Buff_TekArmor_Boots_Gen2_NoMap_C.UserConstructionScript
// ()

void ABuff_TekArmor_Boots_Gen2_NoMap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Boots_Gen2_NoMap.Buff_TekArmor_Boots_Gen2_NoMap_C.UserConstructionScript");

	ABuff_TekArmor_Boots_Gen2_NoMap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Boots_Gen2_NoMap.Buff_TekArmor_Boots_Gen2_NoMap_C.ExecuteUbergraph_Buff_TekArmor_Boots_Gen2_NoMap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Boots_Gen2_NoMap_C::ExecuteUbergraph_Buff_TekArmor_Boots_Gen2_NoMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Boots_Gen2_NoMap.Buff_TekArmor_Boots_Gen2_NoMap_C.ExecuteUbergraph_Buff_TekArmor_Boots_Gen2_NoMap");

	ABuff_TekArmor_Boots_Gen2_NoMap_C_ExecuteUbergraph_Buff_TekArmor_Boots_Gen2_NoMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
