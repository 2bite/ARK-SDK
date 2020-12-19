// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Gravestone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Gravestone.EngramEntry_Gravestone_C.ExecuteUbergraph_EngramEntry_Gravestone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Gravestone_C::ExecuteUbergraph_EngramEntry_Gravestone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Gravestone.EngramEntry_Gravestone_C.ExecuteUbergraph_EngramEntry_Gravestone");

	UEngramEntry_Gravestone_C_ExecuteUbergraph_EngramEntry_Gravestone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
