// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_HoverSail_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_HoverSail.DinoSettings_HoverSail_C.ExecuteUbergraph_DinoSettings_HoverSail
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_HoverSail_C::ExecuteUbergraph_DinoSettings_HoverSail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_HoverSail.DinoSettings_HoverSail_C.ExecuteUbergraph_DinoSettings_HoverSail");

	UDinoSettings_HoverSail_C_ExecuteUbergraph_DinoSettings_HoverSail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
