// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_EmptyCryopod_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_EmptyCryopod.EngramEntry_EmptyCryopod_C.ExecuteUbergraph_EngramEntry_EmptyCryopod
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_EmptyCryopod_C::ExecuteUbergraph_EngramEntry_EmptyCryopod(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_EmptyCryopod.EngramEntry_EmptyCryopod_C.ExecuteUbergraph_EngramEntry_EmptyCryopod");

	UEngramEntry_EmptyCryopod_C_ExecuteUbergraph_EngramEntry_EmptyCryopod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
