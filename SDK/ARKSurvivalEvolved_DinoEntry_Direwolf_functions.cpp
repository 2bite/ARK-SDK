// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Direwolf_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Direwolf.DinoEntry_Direwolf_C.ExecuteUbergraph_DinoEntry_Direwolf
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Direwolf_C::ExecuteUbergraph_DinoEntry_Direwolf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Direwolf.DinoEntry_Direwolf_C.ExecuteUbergraph_DinoEntry_Direwolf");

	UDinoEntry_Direwolf_C_ExecuteUbergraph_DinoEntry_Direwolf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
