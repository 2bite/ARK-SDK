// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Sword_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Sword.EngramEntry_Sword_C.ExecuteUbergraph_EngramEntry_Sword
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Sword_C::ExecuteUbergraph_EngramEntry_Sword(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Sword.EngramEntry_Sword_C.ExecuteUbergraph_EngramEntry_Sword");

	UEngramEntry_Sword_C_ExecuteUbergraph_EngramEntry_Sword_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
