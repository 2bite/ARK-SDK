// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ext_DinoSpawnEntries_DesertOasis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ext_DinoSpawnEntries_DesertOasis.Ext_DinoSpawnEntries_DesertOasis_C.ExecuteUbergraph_Ext_DinoSpawnEntries_DesertOasis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UExt_DinoSpawnEntries_DesertOasis_C::ExecuteUbergraph_Ext_DinoSpawnEntries_DesertOasis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ext_DinoSpawnEntries_DesertOasis.Ext_DinoSpawnEntries_DesertOasis_C.ExecuteUbergraph_Ext_DinoSpawnEntries_DesertOasis");

	UExt_DinoSpawnEntries_DesertOasis_C_ExecuteUbergraph_Ext_DinoSpawnEntries_DesertOasis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
