// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_BrokenByPlasma_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureSettings_BrokenByPlasma.StructureSettings_BrokenByPlasma_C.ExecuteUbergraph_StructureSettings_BrokenByPlasma
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStructureSettings_BrokenByPlasma_C::ExecuteUbergraph_StructureSettings_BrokenByPlasma(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureSettings_BrokenByPlasma.StructureSettings_BrokenByPlasma_C.ExecuteUbergraph_StructureSettings_BrokenByPlasma");

	UStructureSettings_BrokenByPlasma_C_ExecuteUbergraph_StructureSettings_BrokenByPlasma_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
