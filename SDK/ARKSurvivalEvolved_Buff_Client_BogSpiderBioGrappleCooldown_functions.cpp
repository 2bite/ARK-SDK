// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Client_BogSpiderBioGrappleCooldown_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Client_BogSpiderBioGrappleCooldown.Buff_Client_BogSpiderBioGrappleCooldown_C.UserConstructionScript
// ()

void ABuff_Client_BogSpiderBioGrappleCooldown_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Client_BogSpiderBioGrappleCooldown.Buff_Client_BogSpiderBioGrappleCooldown_C.UserConstructionScript");

	ABuff_Client_BogSpiderBioGrappleCooldown_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Client_BogSpiderBioGrappleCooldown.Buff_Client_BogSpiderBioGrappleCooldown_C.ExecuteUbergraph_Buff_Client_BogSpiderBioGrappleCooldown
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Client_BogSpiderBioGrappleCooldown_C::ExecuteUbergraph_Buff_Client_BogSpiderBioGrappleCooldown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Client_BogSpiderBioGrappleCooldown.Buff_Client_BogSpiderBioGrappleCooldown_C.ExecuteUbergraph_Buff_Client_BogSpiderBioGrappleCooldown");

	ABuff_Client_BogSpiderBioGrappleCooldown_C_ExecuteUbergraph_Buff_Client_BogSpiderBioGrappleCooldown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
