// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Kaiju_Forest_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Kaiju_Forest.DinoSettings_Kaiju_Forest_C.ExecuteUbergraph_DinoSettings_Kaiju_Forest
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Kaiju_Forest_C::ExecuteUbergraph_DinoSettings_Kaiju_Forest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Kaiju_Forest.DinoSettings_Kaiju_Forest_C.ExecuteUbergraph_DinoSettings_Kaiju_Forest");

	UDinoSettings_Kaiju_Forest_C_ExecuteUbergraph_DinoSettings_Kaiju_Forest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
