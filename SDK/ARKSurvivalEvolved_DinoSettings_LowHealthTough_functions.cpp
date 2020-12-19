// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_LowHealthTough_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_LowHealthTough.DinoSettings_LowHealthTough_C.ExecuteUbergraph_DinoSettings_LowHealthTough
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_LowHealthTough_C::ExecuteUbergraph_DinoSettings_LowHealthTough(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_LowHealthTough.DinoSettings_LowHealthTough_C.ExecuteUbergraph_DinoSettings_LowHealthTough");

	UDinoSettings_LowHealthTough_C_ExecuteUbergraph_DinoSettings_LowHealthTough_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
