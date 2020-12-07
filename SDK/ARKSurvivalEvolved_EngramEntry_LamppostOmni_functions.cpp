// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_LamppostOmni_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_LamppostOmni.EngramEntry_LamppostOmni_C.ExecuteUbergraph_EngramEntry_LamppostOmni
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_LamppostOmni_C::ExecuteUbergraph_EngramEntry_LamppostOmni(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_LamppostOmni.EngramEntry_LamppostOmni_C.ExecuteUbergraph_EngramEntry_LamppostOmni");

	UEngramEntry_LamppostOmni_C_ExecuteUbergraph_EngramEntry_LamppostOmni_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
