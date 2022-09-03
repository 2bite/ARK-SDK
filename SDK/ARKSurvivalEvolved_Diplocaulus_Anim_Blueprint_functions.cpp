// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Diplocaulus_Anim_Blueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Diplocaulus_Anim_Blueprint.Diplocaulus_Anim_Blueprint_C.ExecuteUbergraph_Diplocaulus_Anim_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDiplocaulus_Anim_Blueprint_C::ExecuteUbergraph_Diplocaulus_Anim_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplocaulus_Anim_Blueprint.Diplocaulus_Anim_Blueprint_C.ExecuteUbergraph_Diplocaulus_Anim_Blueprint");

	UDiplocaulus_Anim_Blueprint_C_ExecuteUbergraph_Diplocaulus_Anim_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
