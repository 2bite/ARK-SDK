// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_NoDamageModifications_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureSettings_NoDamageModifications.StructureSettings_NoDamageModifications_C.ExecuteUbergraph_StructureSettings_NoDamageModifications
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStructureSettings_NoDamageModifications_C::ExecuteUbergraph_StructureSettings_NoDamageModifications(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureSettings_NoDamageModifications.StructureSettings_NoDamageModifications_C.ExecuteUbergraph_StructureSettings_NoDamageModifications");

	UStructureSettings_NoDamageModifications_C_ExecuteUbergraph_StructureSettings_NoDamageModifications_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
