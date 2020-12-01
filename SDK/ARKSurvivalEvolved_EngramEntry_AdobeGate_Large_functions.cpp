// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AdobeGate_Large_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AdobeGate_Large.EngramEntry_AdobeGate_Large_C.ExecuteUbergraph_EngramEntry_AdobeGate_Large
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AdobeGate_Large_C::ExecuteUbergraph_EngramEntry_AdobeGate_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AdobeGate_Large.EngramEntry_AdobeGate_Large_C.ExecuteUbergraph_EngramEntry_AdobeGate_Large");

	UEngramEntry_AdobeGate_Large_C_ExecuteUbergraph_EngramEntry_AdobeGate_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
