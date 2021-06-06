// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiMegalania_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiMegalania.BoneModifiersContainer_ChibiMegalania_C.ExecuteUbergraph_BoneModifiersContainer_ChibiMegalania
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiMegalania_C::ExecuteUbergraph_BoneModifiersContainer_ChibiMegalania(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiMegalania.BoneModifiersContainer_ChibiMegalania_C.ExecuteUbergraph_BoneModifiersContainer_ChibiMegalania");

	UBoneModifiersContainer_ChibiMegalania_C_ExecuteUbergraph_BoneModifiersContainer_ChibiMegalania_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
