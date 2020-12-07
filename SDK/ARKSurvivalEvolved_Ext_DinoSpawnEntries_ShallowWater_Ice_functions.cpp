// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ext_DinoSpawnEntries_ShallowWater_Ice_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ext_DinoSpawnEntries_ShallowWater_Ice.Ext_DinoSpawnEntries_ShallowWater_Ice_C.ExecuteUbergraph_Ext_DinoSpawnEntries_ShallowWater_Ice
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UExt_DinoSpawnEntries_ShallowWater_Ice_C::ExecuteUbergraph_Ext_DinoSpawnEntries_ShallowWater_Ice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ext_DinoSpawnEntries_ShallowWater_Ice.Ext_DinoSpawnEntries_ShallowWater_Ice_C.ExecuteUbergraph_Ext_DinoSpawnEntries_ShallowWater_Ice");

	UExt_DinoSpawnEntries_ShallowWater_Ice_C_ExecuteUbergraph_Ext_DinoSpawnEntries_ShallowWater_Ice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
