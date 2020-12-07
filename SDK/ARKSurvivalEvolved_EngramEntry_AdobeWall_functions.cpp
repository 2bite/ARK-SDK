// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AdobeWall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AdobeWall.EngramEntry_AdobeWall_C.ExecuteUbergraph_EngramEntry_AdobeWall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AdobeWall_C::ExecuteUbergraph_EngramEntry_AdobeWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AdobeWall.EngramEntry_AdobeWall_C.ExecuteUbergraph_EngramEntry_AdobeWall");

	UEngramEntry_AdobeWall_C_ExecuteUbergraph_EngramEntry_AdobeWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
