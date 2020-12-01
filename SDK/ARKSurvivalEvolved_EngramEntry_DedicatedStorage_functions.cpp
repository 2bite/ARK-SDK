// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_DedicatedStorage_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_DedicatedStorage.EngramEntry_DedicatedStorage_C.ExecuteUbergraph_EngramEntry_DedicatedStorage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_DedicatedStorage_C::ExecuteUbergraph_EngramEntry_DedicatedStorage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_DedicatedStorage.EngramEntry_DedicatedStorage_C.ExecuteUbergraph_EngramEntry_DedicatedStorage");

	UEngramEntry_DedicatedStorage_C_ExecuteUbergraph_EngramEntry_DedicatedStorage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
