// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gallimimus_Anim_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gallimimus_Anim_BP.Gallimimus_Anim_BP_C.ExecuteUbergraph_Gallimimus_Anim_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGallimimus_Anim_BP_C::ExecuteUbergraph_Gallimimus_Anim_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gallimimus_Anim_BP.Gallimimus_Anim_BP_C.ExecuteUbergraph_Gallimimus_Anim_BP");

	UGallimimus_Anim_BP_C_ExecuteUbergraph_Gallimimus_Anim_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
