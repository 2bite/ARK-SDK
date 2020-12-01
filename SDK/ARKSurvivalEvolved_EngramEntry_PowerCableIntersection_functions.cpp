// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_PowerCableIntersection_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_PowerCableIntersection.EngramEntry_PowerCableIntersection_C.ExecuteUbergraph_EngramEntry_PowerCableIntersection
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_PowerCableIntersection_C::ExecuteUbergraph_EngramEntry_PowerCableIntersection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_PowerCableIntersection.EngramEntry_PowerCableIntersection_C.ExecuteUbergraph_EngramEntry_PowerCableIntersection");

	UEngramEntry_PowerCableIntersection_C_ExecuteUbergraph_EngramEntry_PowerCableIntersection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
