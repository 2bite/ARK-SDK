// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ext_DinoSpawnEntries_DesertCave_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ext_DinoSpawnEntries_DesertCave.Ext_DinoSpawnEntries_DesertCave_C.ExecuteUbergraph_Ext_DinoSpawnEntries_DesertCave
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UExt_DinoSpawnEntries_DesertCave_C::ExecuteUbergraph_Ext_DinoSpawnEntries_DesertCave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ext_DinoSpawnEntries_DesertCave.Ext_DinoSpawnEntries_DesertCave_C.ExecuteUbergraph_Ext_DinoSpawnEntries_DesertCave");

	UExt_DinoSpawnEntries_DesertCave_C_ExecuteUbergraph_Ext_DinoSpawnEntries_DesertCave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
