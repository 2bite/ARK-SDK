// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Minigun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Minigun.EngramEntry_Minigun_C.ExecuteUbergraph_EngramEntry_Minigun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Minigun_C::ExecuteUbergraph_EngramEntry_Minigun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Minigun.EngramEntry_Minigun_C.ExecuteUbergraph_EngramEntry_Minigun");

	UEngramEntry_Minigun_C_ExecuteUbergraph_EngramEntry_Minigun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
