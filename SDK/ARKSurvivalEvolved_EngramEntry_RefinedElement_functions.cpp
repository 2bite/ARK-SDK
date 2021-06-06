// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_RefinedElement_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_RefinedElement.EngramEntry_RefinedElement_C.ExecuteUbergraph_EngramEntry_RefinedElement
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_RefinedElement_C::ExecuteUbergraph_EngramEntry_RefinedElement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_RefinedElement.EngramEntry_RefinedElement_C.ExecuteUbergraph_EngramEntry_RefinedElement");

	UEngramEntry_RefinedElement_C_ExecuteUbergraph_EngramEntry_RefinedElement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
