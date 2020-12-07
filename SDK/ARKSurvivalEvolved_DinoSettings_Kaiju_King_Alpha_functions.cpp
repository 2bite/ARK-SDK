// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Kaiju_King_Alpha_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Kaiju_King_Alpha.DinoSettings_Kaiju_King_Alpha_C.ExecuteUbergraph_DinoSettings_Kaiju_King_Alpha
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Kaiju_King_Alpha_C::ExecuteUbergraph_DinoSettings_Kaiju_King_Alpha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Kaiju_King_Alpha.DinoSettings_Kaiju_King_Alpha_C.ExecuteUbergraph_DinoSettings_Kaiju_King_Alpha");

	UDinoSettings_Kaiju_King_Alpha_C_ExecuteUbergraph_DinoSettings_Kaiju_King_Alpha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
