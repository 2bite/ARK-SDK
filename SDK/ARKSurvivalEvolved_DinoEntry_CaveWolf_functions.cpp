// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_CaveWolf_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_CaveWolf.DinoEntry_CaveWolf_C.ExecuteUbergraph_DinoEntry_CaveWolf
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_CaveWolf_C::ExecuteUbergraph_DinoEntry_CaveWolf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_CaveWolf.DinoEntry_CaveWolf_C.ExecuteUbergraph_DinoEntry_CaveWolf");

	UDinoEntry_CaveWolf_C_ExecuteUbergraph_DinoEntry_CaveWolf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
