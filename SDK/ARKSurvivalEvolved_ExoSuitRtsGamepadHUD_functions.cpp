// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExoSuitRtsGamepadHUD_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExoSuitRtsGamepadHUD.ExoSuitRtsGamepadHUD_C.Construct
// ()

void UExoSuitRtsGamepadHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSuitRtsGamepadHUD.ExoSuitRtsGamepadHUD_C.Construct");

	UExoSuitRtsGamepadHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExoSuitRtsGamepadHUD.ExoSuitRtsGamepadHUD_C.ExecuteUbergraph_ExoSuitRtsGamepadHUD
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UExoSuitRtsGamepadHUD_C::ExecuteUbergraph_ExoSuitRtsGamepadHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoSuitRtsGamepadHUD.ExoSuitRtsGamepadHUD_C.ExecuteUbergraph_ExoSuitRtsGamepadHUD");

	UExoSuitRtsGamepadHUD_C_ExecuteUbergraph_ExoSuitRtsGamepadHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
