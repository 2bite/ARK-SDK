// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Kaiju_Desert_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Kaiju_Desert.DinoSettings_Kaiju_Desert_C.ExecuteUbergraph_DinoSettings_Kaiju_Desert
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Kaiju_Desert_C::ExecuteUbergraph_DinoSettings_Kaiju_Desert(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Kaiju_Desert.DinoSettings_Kaiju_Desert_C.ExecuteUbergraph_DinoSettings_Kaiju_Desert");

	UDinoSettings_Kaiju_Desert_C_ExecuteUbergraph_DinoSettings_Kaiju_Desert_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
