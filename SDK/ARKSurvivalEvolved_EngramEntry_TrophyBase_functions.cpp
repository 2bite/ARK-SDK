// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TrophyBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TrophyBase.EngramEntry_TrophyBase_C.ExecuteUbergraph_EngramEntry_TrophyBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TrophyBase_C::ExecuteUbergraph_EngramEntry_TrophyBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TrophyBase.EngramEntry_TrophyBase_C.ExecuteUbergraph_EngramEntry_TrophyBase");

	UEngramEntry_TrophyBase_C_ExecuteUbergraph_EngramEntry_TrophyBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
