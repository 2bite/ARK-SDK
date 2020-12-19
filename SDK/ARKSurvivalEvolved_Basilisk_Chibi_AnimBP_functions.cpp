// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basilisk_Chibi_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basilisk_Chibi_AnimBP.Basilisk_Chibi_AnimBP_C.ExecuteUbergraph_Basilisk_Chibi_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBasilisk_Chibi_AnimBP_C::ExecuteUbergraph_Basilisk_Chibi_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Chibi_AnimBP.Basilisk_Chibi_AnimBP_C.ExecuteUbergraph_Basilisk_Chibi_AnimBP");

	UBasilisk_Chibi_AnimBP_C_ExecuteUbergraph_Basilisk_Chibi_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
