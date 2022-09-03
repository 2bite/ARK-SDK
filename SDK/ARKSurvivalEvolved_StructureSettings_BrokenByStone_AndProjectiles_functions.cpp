// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_BrokenByStone_AndProjectiles_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureSettings_BrokenByStone_AndProjectiles.StructureSettings_BrokenByStone_AndProjectiles_C.ExecuteUbergraph_StructureSettings_BrokenByStone_AndProjectiles
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStructureSettings_BrokenByStone_AndProjectiles_C::ExecuteUbergraph_StructureSettings_BrokenByStone_AndProjectiles(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureSettings_BrokenByStone_AndProjectiles.StructureSettings_BrokenByStone_AndProjectiles_C.ExecuteUbergraph_StructureSettings_BrokenByStone_AndProjectiles");

	UStructureSettings_BrokenByStone_AndProjectiles_C_ExecuteUbergraph_StructureSettings_BrokenByStone_AndProjectiles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
