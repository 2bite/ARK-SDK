// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_WarMap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_WarMap.EngramEntry_WarMap_C.ExecuteUbergraph_EngramEntry_WarMap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_WarMap_C::ExecuteUbergraph_EngramEntry_WarMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_WarMap.EngramEntry_WarMap_C.ExecuteUbergraph_EngramEntry_WarMap");

	UEngramEntry_WarMap_C_ExecuteUbergraph_EngramEntry_WarMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
