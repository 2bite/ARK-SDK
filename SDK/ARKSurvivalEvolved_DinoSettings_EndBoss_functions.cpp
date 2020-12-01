// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_EndBoss_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_EndBoss.DinoSettings_EndBoss_C.ExecuteUbergraph_DinoSettings_EndBoss
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_EndBoss_C::ExecuteUbergraph_DinoSettings_EndBoss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_EndBoss.DinoSettings_EndBoss_C.ExecuteUbergraph_DinoSettings_EndBoss");

	UDinoSettings_EndBoss_C_ExecuteUbergraph_DinoSettings_EndBoss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
