// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CompanionReactionModule_Banter_SanctumA_01_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CompanionReactionModule_Banter_SanctumA_01.CompanionReactionModule_Banter_SanctumA_01_C.ExecuteUbergraph_CompanionReactionModule_Banter_SanctumA_01
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCompanionReactionModule_Banter_SanctumA_01_C::ExecuteUbergraph_CompanionReactionModule_Banter_SanctumA_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompanionReactionModule_Banter_SanctumA_01.CompanionReactionModule_Banter_SanctumA_01_C.ExecuteUbergraph_CompanionReactionModule_Banter_SanctumA_01");

	UCompanionReactionModule_Banter_SanctumA_01_C_ExecuteUbergraph_CompanionReactionModule_Banter_SanctumA_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
