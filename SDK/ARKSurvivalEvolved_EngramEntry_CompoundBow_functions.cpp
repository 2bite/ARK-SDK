// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_CompoundBow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_CompoundBow.EngramEntry_CompoundBow_C.ExecuteUbergraph_EngramEntry_CompoundBow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_CompoundBow_C::ExecuteUbergraph_EngramEntry_CompoundBow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_CompoundBow.EngramEntry_CompoundBow_C.ExecuteUbergraph_EngramEntry_CompoundBow");

	UEngramEntry_CompoundBow_C_ExecuteUbergraph_EngramEntry_CompoundBow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
