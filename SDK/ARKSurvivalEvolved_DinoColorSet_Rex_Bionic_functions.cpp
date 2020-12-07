// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Rex_Bionic_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Rex_Bionic.DinoColorSet_Rex_Bionic_C.ExecuteUbergraph_DinoColorSet_Rex_Bionic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Rex_Bionic_C::ExecuteUbergraph_DinoColorSet_Rex_Bionic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Rex_Bionic.DinoColorSet_Rex_Bionic_C.ExecuteUbergraph_DinoColorSet_Rex_Bionic");

	UDinoColorSet_Rex_Bionic_C_ExecuteUbergraph_DinoColorSet_Rex_Bionic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
