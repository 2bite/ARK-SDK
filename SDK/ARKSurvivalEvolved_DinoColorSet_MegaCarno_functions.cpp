// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_MegaCarno_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_MegaCarno.DinoColorSet_MegaCarno_C.ExecuteUbergraph_DinoColorSet_MegaCarno
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_MegaCarno_C::ExecuteUbergraph_DinoColorSet_MegaCarno(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_MegaCarno.DinoColorSet_MegaCarno_C.ExecuteUbergraph_DinoColorSet_MegaCarno");

	UDinoColorSet_MegaCarno_C_ExecuteUbergraph_DinoColorSet_MegaCarno_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
