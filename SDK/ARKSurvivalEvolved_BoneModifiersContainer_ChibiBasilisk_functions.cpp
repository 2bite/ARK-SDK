// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiBasilisk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiBasilisk.BoneModifiersContainer_ChibiBasilisk_C.ExecuteUbergraph_BoneModifiersContainer_ChibiBasilisk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiBasilisk_C::ExecuteUbergraph_BoneModifiersContainer_ChibiBasilisk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiBasilisk.BoneModifiersContainer_ChibiBasilisk_C.ExecuteUbergraph_BoneModifiersContainer_ChibiBasilisk");

	UBoneModifiersContainer_ChibiBasilisk_C_ExecuteUbergraph_BoneModifiersContainer_ChibiBasilisk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
