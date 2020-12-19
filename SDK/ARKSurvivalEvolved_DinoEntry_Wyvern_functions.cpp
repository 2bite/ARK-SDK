// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Wyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Wyvern.DinoEntry_Wyvern_C.ExecuteUbergraph_DinoEntry_Wyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Wyvern_C::ExecuteUbergraph_DinoEntry_Wyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Wyvern.DinoEntry_Wyvern_C.ExecuteUbergraph_DinoEntry_Wyvern");

	UDinoEntry_Wyvern_C_ExecuteUbergraph_DinoEntry_Wyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
