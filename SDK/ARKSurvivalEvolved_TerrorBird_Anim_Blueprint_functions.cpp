// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TerrorBird_Anim_Blueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TerrorBird_Anim_Blueprint.TerrorBird_Anim_Blueprint_C.ExecuteUbergraph_TerrorBird_Anim_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTerrorBird_Anim_Blueprint_C::ExecuteUbergraph_TerrorBird_Anim_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrorBird_Anim_Blueprint.TerrorBird_Anim_Blueprint_C.ExecuteUbergraph_TerrorBird_Anim_Blueprint");

	UTerrorBird_Anim_Blueprint_C_ExecuteUbergraph_TerrorBird_Anim_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
