// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_BrokenByPlasma_NoRifle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureSettings_BrokenByPlasma_NoRifle.StructureSettings_BrokenByPlasma_NoRifle_C.ExecuteUbergraph_StructureSettings_BrokenByPlasma_NoRifle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStructureSettings_BrokenByPlasma_NoRifle_C::ExecuteUbergraph_StructureSettings_BrokenByPlasma_NoRifle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureSettings_BrokenByPlasma_NoRifle.StructureSettings_BrokenByPlasma_NoRifle_C.ExecuteUbergraph_StructureSettings_BrokenByPlasma_NoRifle");

	UStructureSettings_BrokenByPlasma_NoRifle_C_ExecuteUbergraph_StructureSettings_BrokenByPlasma_NoRifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
