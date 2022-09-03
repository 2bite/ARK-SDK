// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KingKaiju_ElementNode_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KingKaiju_ElementNode_Interface.KingKaiju_ElementNode_Interface_C.SetVar_KKCharacter
// ()
// Parameters:
// class AActor*                  KKChar                         (Parm, ZeroConstructor, IsPlainOldData)

void UKingKaiju_ElementNode_Interface_C::SetVar_KKCharacter(class AActor* KKChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode_Interface.KingKaiju_ElementNode_Interface_C.SetVar_KKCharacter");

	UKingKaiju_ElementNode_Interface_C_SetVar_KKCharacter_Params params;
	params.KKChar = KKChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
